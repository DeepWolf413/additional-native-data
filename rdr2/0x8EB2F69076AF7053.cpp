// beat_bounty_transport.ysc @ L17592
void func_544(int iParam0)
{
  var uVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  if (!PED::DOES_GROUP_EXIST(iParam0) || !PED::_0x0455546F23FF08E4(iParam0))
  {
    return;
  }
  PED::GET_GROUP_SIZE(iParam0, &uVar0, &iVar2);
  if (iVar2 > 0)
  {
    iVar1 = 0;
    while (iVar1 < iVar2)
    {
      iVar3 = PED::GET_PED_AS_GROUP_MEMBER(iParam0, iVar1);
      if (ENTITY::DOES_ENTITY_EXIST(iVar3))
      {
        if (!ENTITY::IS_ENTITY_DEAD(iVar3))
        {
          PED::REMOVE_PED_FROM_GROUP(iVar3);
        }
      }
      iVar1++;
    }
  }
  PED::REMOVE_GROUP(iParam0);
}