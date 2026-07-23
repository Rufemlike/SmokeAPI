import re

filepath = r"D:\SteamLibrary\steamapps\common\Arma 3\arma3_x64.exe"
server_filepath = r"D:\SteamLibrary\steamapps\common\Arma 3\arma3server_x64.exe"

def search_in_file(path, keywords):
    try:
        with open(path, "rb") as f:
            content = f.read()
            
        print(f"=== Searching in {path} ===")
        for kw in keywords:
            matches = list(re.finditer(re.escape(kw), content, re.IGNORECASE))
            if matches:
                print(f"\n--- Keyword '{kw.decode()}' (found {len(matches)}) ---")
                for m in matches[:10]:
                    start = max(0, m.start() - 80)
                    end = min(len(content), m.end() + 80)
                    chunk = content[start:end]
                    printable = re.findall(rb"[ -~]{3,}", chunk)
                    strs = " | ".join(p.decode(errors='ignore') for p in printable)
                    print(f"  [0x{0x140000000 + m.start():x}]: {strs}")
    except Exception as e:
        print(f"Error reading {path}: {e}")

keywords = [
    b"cdlc", b"creator", b"validation", b"ticket", b"token", b"ownership", 
    b"account.bistudio.com", b"oauth.bistudio.com", b"multiplayer", b"mission", b"dlc",
    b"BIsSubscribedApp", b"UserHasLicenseForApp"
]

search_in_file(filepath, [b"bistudio.com", b"api/v1.0", b"BIsSubscribedApp", b"UserHasLicenseForApp", b"validate", b"dlc_ownership", b"auth", b"token"])
search_in_file(server_filepath, [b"bistudio.com", b"api/v1.0", b"BIsSubscribedApp", b"UserHasLicenseForApp", b"validate", b"dlc_ownership", b"auth", b"token"])

