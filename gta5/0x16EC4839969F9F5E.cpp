// assassin_multi.ysc @ L11202
int func_242(int iParam0, float fParam1)
{
  struct<3> Var0;
  
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
  {
    if (!PED::IS_PED_INJURED(iParam0))
    {
      Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
      if (PED::IS_COP_PED_IN_AREA_3D((Var0.x - fParam1), (Var0.f_1 - fParam1), (Var0.f_2 - fParam1), (Var0.x + fParam1), (Var0.f_1 + fParam1), (Var0.f_2 + fParam1)))
      {
        return 1;
      }
    }
  }
  return 0;
}