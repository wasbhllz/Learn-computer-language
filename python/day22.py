## 学习
# 字典中嵌入字典
# 看不懂代码可以先看下输出,就知道要实现的效果是什么了
tivat_people = {
    '流浪者':
    {'曾用名':'散兵',
     '国家':'稻妻',
     '物种':'人偶'},
    '达达利亚':
    {'曾用名':'阿贾克斯',
    '国家':'至冬',
    '物种':'人类'}
}
for h,j in tivat_people.items(): # 先循环最外面的字典
    print('\n姓名:'+h)
    names = j['曾用名']+','+j['国家']
    species = j['物种']
    print('昵称和国家:'+str(names)) # 字符串和列表不能一起打印,将列表用str()转为字符串
    print('物种:'+str(species))
# 请注意，表示每位用户的字典的结构都相同，虽然Python并没有这样的要求，但这使得嵌套的字典处理起来更容易。倘若表示每位用户的字典都包含不同的键，for循环内部的代码将更复杂

## 练习
people = {
    '风神':
    {'神名':'巴巴托斯',
    '职位':'风神',
    '相貌':'少年',
    '国家':'蒙德',
    },
    '岩神':
    {'神名':'摩拉克斯',
    '职位':'岩神',
    '相貌':'成男',
    '国家':'璃月',
    },
    '雷神':
    {'神名':'巴尔泽布',
    '职位':'雷神',
    '相貌':'成女',
    '国家':'稻妻',}
    }  
for on in people:
    print(on)
for i,m in people.items():
    print('每个国家都会有一个神明:'+i)
    people_1 ='来自于'+m['国家']+ '的'+m['神名']+'拥有'+m['相貌']+'的体型 !'
    print(people_1)

