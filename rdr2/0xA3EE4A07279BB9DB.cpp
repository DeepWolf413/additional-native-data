// abigail2_1.ysc @ L34703
void func_782(var uParam0)
{
  bool bVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  if (func_776(uParam0, 2048) && !func_386(func_1300(uParam0)))
  {
    bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
    iVar1 = PED::_GET_LAST_MOUNT(Global_35);
    if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || func_776(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
    {
      iVar2 = 2;
      if (TASK::IS_PED_IN_WRITHE(iVar1))
      {
        iVar2 |= 32;
      }
      func_857(iVar1, func_1300(uParam0), func_1301(uParam0), iVar2, 1073741824 /* Float: 2f */);
    }
    iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
    if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || func_776(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
    {
      func_857(iVar3, func_1300(uParam0), func_1301(uParam0), 2, 1073741824 /* Float: 2f */);
    }
  }
}