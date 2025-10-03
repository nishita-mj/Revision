class Student{
    constructor(name, marks){
        this.name = name;
        this.marks = marks;
    }

    display(){
        console.log(this.name)
        console.log(this.marks)
    }
}

let s1 = new Student("Nishita",80);

s1.display();