class Student{
    constructor(name, rollno, marks){
        this.name = name;
        this.rollno = rollno;
        this.marks = marks;
    }

    DisplayDetails(){
        console.log(this.name);
        console.log(this.rollno);
        console.log(this.marks);
    }
}

let s1 = new Student("Nishita", 1, 80);

s1.DisplayDetails();