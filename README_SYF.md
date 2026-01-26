【brew】
# 查看通过brew安装的应用相关配置目录，比如nginx
brew --prefix nginx
# 查看配置文件目录
ls $(brew --prefix nginx)/etc/nginx

nginx -s reload

Description:
