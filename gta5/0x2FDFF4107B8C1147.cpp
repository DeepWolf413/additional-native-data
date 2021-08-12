// armenian1.ysc @ L57202
void func_532(bool bParam0)
{
  struct<3> Var0;
  int iVar3;
  float fVar4;
  struct<3> Var5;
  
  Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_2874, 2) };
  Var0.x = (Var0.x - (5f * SYSTEM::TIMESTEP()));
  ENTITY::SET_ENTITY_ROTATION(iLocal_2874, Var0.x, Var0.f_1, Var0.f_2, 2, true);
  iVar3 = 0;
  iVar3 = 0;
  while (iVar3 < iLocal_2875)
  {
    fVar4 = (IntToFloat(iVar3) * 22.5f);
    Var5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_2874, 0f, (15.3f * SYSTEM::COS(fVar4)), (15.3f * SYSTEM::SIN(fVar4))) };
    if (bParam0)
    {
      ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_2875[iVar3], Var5, false, false, true);
    }
    else
    {
      OBJECT::SLIDE_OBJECT(iLocal_2875[iVar3], Var5, 1f, 1f, 1f, false);
    }
    iVar3++;
  }
}