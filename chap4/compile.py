#Author:Elin 
#Create Time:2023-04-18 07:58:33
#Last Modified By:Elin
#Update Time:2023-04-18 07:58:33
import os
for i in os.listdir("./src"):
    if i.endswith(".cpp") or i.endswith(".cc"):
        name = i.replace(".cc","").replace(".cpp","")
        cmd = f"g++ ./src/{i} -o ./bin/{name}.o"
        result = os.system(cmd)
        print(cmd + "\t--" + "\t"*2 + str("[OK]" if result == 0 else "[ERROR]"))
print("Compile done")