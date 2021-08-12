// gb_delivery.ysc @ L139485
void func_1474(var uParam0, var uParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    iVar0 = ENTITY::GET_ENTITY_MODEL(*uParam1);
    iVar1 = ENTITY::_GET_ENTITY_PICKUP(uParam0->f_7, iVar0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar1))
    {
      iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
      {
        func_759(&Global_1703213);
        func_784(iVar2, &Global_1703213);
        func_586(*uParam1, &Global_1703213, 1, 1, 0);
        VEHICLE::COPY_VEHICLE_DAMAGES(iVar2, *uParam1);
        func_1318(iVar2, uParam1);
      }
    }
  }
}