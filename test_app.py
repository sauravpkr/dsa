from app import sum,len_of_list,list_reverse



def test_sum():
    x=6
    assert x == sum(2,4)
    assert 7 == sum(5,6)
    
    
# def test2_sum():
#     assert 7 != sum(5,6)
    
def test1_len_of_list():
    x= [1,2,3,4,5,6,7,8,5,6]
    assert 10 is len_of_list(x)
    
def 
