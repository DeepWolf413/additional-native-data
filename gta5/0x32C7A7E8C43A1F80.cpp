// business_battles_sell.ysc @ L349724
void func_5759(int iParam0, int iParam1)
{
  struct<3> Var0;
  float fVar3;
  
  if (!func_5760(iParam0) || func_687() != bLocal_144)
  {
    return;
  }
  Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
  fVar3 = 500f;
  switch (func_6471())
  {
    case 5:
      fVar3 = 115f;
      Var0 = { func_471(0, func_6471(), func_35(), func_134()) };
      break;
  }
  if (SYSTEM::VDIST2(Var0, Local_5215) > (550f * 550f))
  {
    if (iLocal_5218 != -1)
    {
      MISC::REMOVE_POP_MULTIPLIER_SPHERE(iLocal_5218, false);
    }
    Local_5215 = { Var0 };
    iLocal_5218 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_5215, fVar3, 1f, 0.02f, false, true);
  }
}