// fbi5a.ysc @ L101297
void func_532(var uParam0, var uParam1, var uParam2, bool bParam3)
{
  int iVar0;
  struct<3> Var1;
  int iVar4;
  
  if (!*uParam2)
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
    {
      iVar0 = 0;
      while (iVar0 < 4)
      {
        Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, func_531(iVar0)) };
        if (bParam3)
        {
          iVar4 = 0;
        }
        else
        {
          iVar4 = 0;
        }
        (*uParam1)[iVar0] = PHYSICS::ADD_ROPE(Var1, 0f, 0f, 0f, 6f, iVar4, -1f, 0.5f, 0.5f, false, false, true, 1f, false, 0);
        iVar0++;
      }
      *uParam2 = 1;
    }
  }
}