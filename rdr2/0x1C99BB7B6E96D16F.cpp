// abigail2_1.ysc @ L34731
void func_783(var uParam0)
{
  int iVar0;
  vector3 vVar1;

  if ((func_776(uParam0, 268435456) && !func_386(func_1300(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0))
    {
      vVar1 = { func_1300(uParam0) };
      func_857(iVar0, vVar1, func_1302(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
      VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
      ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
      VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
    }
  }
}