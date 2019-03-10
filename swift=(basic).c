// Your code here!


func Count(catchNumber:[Int]?)->Int{
    guard let number = catchNumber else{
        return 0
    }
    var count:Int = 0
    for i in number{
        if(i==7){
            count+=1
        }
    }
    return count;
}
func anotherCount(_ catchAnotherNumber:[Int]?)->Bool{

    guard let number = catchAnotherNumber else{
        return false
    }
    guard  number.count>3 else{
        return false
    }


    if(number.prefix(4).contains(7)){
        return true
    }
    return false
 }

 func sequence(_ number:[Int]?)->Bool{
     guard let Number = number else{
         return false
     }
     for (index,number) in Number.enumerated(){
         let secondIndex = index+1
         let thirdIndex = index+2

         if(index <= Number.count-3 && Number[index]==1 && Number[secondIndex] == 2 && Number[thirdIndex] == 3 ){
             return true
         }
     }
     return false
// Your code here!


func Count(catchNumber:[Int]?)->Int{
    guard let number = catchNumber else{
        return 0
    }
    var count:Int = 0
    for i in number{
        if(i==7){
            count+=1
        }
    }
    return count;
}
func anotherCount(_ catchAnotherNumber:[Int]?)->Bool{

    guard let number = catchAnotherNumber else{
        return false
    }
    guard  number.count>3 else{
        return false
    }


    if(number.prefix(4).contains(7)){
        return true
    }
    return false
 }

 func sequence(_ number:[Int]?)->Bool{
     guard let Number = number else{
         return false
     }
     for (index,number) in Number.enumerated(){
         let secondIndex = index+1
         let thirdIndex = index+2

         if(index <= Number.count-3 && Number[index]==1 && Number[secondIndex] == 2 && Number[thirdIndex] == 3 ){
             return true
         }
     }
     return false

 }



 var number:[Int]?
 number = [0,1,2,1,1,2,3]

 print(sequence(number))




print(Count(catchNumber:[2,3,6,7,7,56,4,5,6,7]))
print(anotherCount(number))

 }



 var number:[Int]?
 number = [0,1,2,1,1,2,3]

 print(sequence(number))




print(Count(catchNumber:[2,3,6,7,7,56,4,5,6,7]))
print(anotherCount(number))
