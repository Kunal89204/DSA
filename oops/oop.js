class Teacher {
    constructor(name, subject) {
        this.name = name;
        this.subject = subject;
    }

    printDetails() {
        console.log(this.name, this.subject,name, subject);
    }

}


const t1 = new Teacher("Kunal", "Hindi")

t1.printDetails