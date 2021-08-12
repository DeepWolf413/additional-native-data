// finale_heist2a.ysc @ L135226
void func_1038(int iParam0, float fParam1, float fParam2, float fParam3)
{
  struct<3> Var0;
  float fVar3;
  float fVar4;
  
  if (!PED::IS_PED_INJURED(*iParam0))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true) };
    fVar3 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0);
    fVar4 = 1f;
    if (fVar3 > fParam2)
    {
      if (fVar3 > fParam3)
      {
        fVar3 = fParam3;
      }
      fVar4 = (fParam1 * (1f - (((fVar3 - fParam2) / (fParam3 - fParam2)) * 0.2f)));
      if (fVar4 > 1.15f)
      {
        fVar4 = 1.15f;
      }
      PED::SET_PED_MOVE_RATE_OVERRIDE(*iParam0, fVar4);
    }
  }
}