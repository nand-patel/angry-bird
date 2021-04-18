class Chain{
constructor(bodyA,bodyB){
var options = {
 bodyA:bodyA,
 bodyB:bodyB,
 stifness:0.04,
 length:10
 
}
this.chain=Constraint.create(options)
World.add(World,this.chain)
}
display(){
var pointA =this.chain.bodyA.position
var pointB =this.chain.bodyA.position
strokeWeight (4)
line (pointA.x,pointA.y,pointb.x,pointb.y)
}

}