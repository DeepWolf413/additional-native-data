// re_duel.ysc @ L5063
int func_77()
{
  struct<3> Var0;
  var uVar3;
  var uVar4;
  
  if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), &Var0, 1, 3f, 0f))
  {
    if (PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var0, &uVar4, &uVar3))
    {
      return uVar3 & 1 == 1;
    }
  }
  return 0;
}