// laptop_trigger.ysc @ L503
int func_1()
{
  int iVar0;
  struct<3> Var1;
  struct<3> Var4;
  
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_135))
  {
    iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_135);
    if (func_3(iVar0))
    {
      if (func_2(PLAYER::PLAYER_PED_ID()))
      {
        Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
        Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_135, true) };
        return SYSTEM::VDIST2(Var1, Var4) > 10000f;
      }
    }
    else
    {
      return !BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iLocal_135);
    }
  }
  return 0;
}