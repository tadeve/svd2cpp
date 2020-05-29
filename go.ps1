Remove-Item -Recurse -Force .\out
# Remove-Item .\stm32f412_n.json
# Remove-Item .\stm32f412_dict.json
mkdir out
python main.py > out.txt