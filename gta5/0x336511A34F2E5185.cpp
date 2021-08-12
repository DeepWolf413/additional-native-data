// act_cinema.ysc @ L95565
int func_698(int iParam0, float fParam1)
{
  struct<3> Var0;
  float fVar3;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
    if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3, false, false))
    {
      if (MISC::ABSF((Var0.f_2 - fVar3)) > fParam1)
      {
        return 1;
      }
    }
    else if (Var0.f_2 > (PATHFIND::_GET_HEIGHTMAP_BOTTOM_Z_FOR_POSITION(Var0.x, Var0.f_1) + fParam1))
    {
      return 1;
    }
    else if (Var0.f_2 > 300f)
    {
      return 1;
    }
  }
  return 0;
}