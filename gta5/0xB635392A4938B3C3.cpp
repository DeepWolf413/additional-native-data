// arena_carmod.ysc @ L261449
int func_2242()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_722.f_405, false))
  {
    if (VEHICLE::IS_TOGGLE_MOD_ON(Local_722.f_405, 20))
    {
      if (func_198(Local_722.f_405))
      {
        return 11;
      }
      VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(Local_722.f_405, &iVar0, &iVar1, &iVar2);
      return func_1371(iVar0, iVar1, iVar2);
    }
  }
  return 1;
}