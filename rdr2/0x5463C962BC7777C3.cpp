// act_fishing06.ysc @ L51525
int func_1546(int iParam0, int iParam1)
{
  var uVar0;
  var uVar1;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  if (PED::IS_PED_INJURED(iParam0))
  {
    return 0;
  }
  uVar1 = PED::_0x5463C962BC7777C3(iParam0, iParam1, &uVar0, 1, 1);
  return uVar1;
}