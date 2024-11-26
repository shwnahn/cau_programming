from setuptools import setup, find_packages


setup(
    name="mypackage",  # 패키지 이름
    version="0.1.0",   # 버전
    packages=find_packages(where='.', include=['mypackage*']),   
    include_package_data=True,  # 패키지 데이터 포함
    description="My example package",  # 설명 추가
) 