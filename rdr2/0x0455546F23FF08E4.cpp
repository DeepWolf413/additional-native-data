// beat_bounty_transport.ysc @ L12409
void func_336(int iParam0, int iParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return;
  }
  if (PED::_0x0455546F23FF08E4(iParam1))
  {
    if (PED::_0x878B68960C1C2A35(iParam0, iParam1))
    {
      func_544(iParam1);
    }
    else
    {
      PED::REMOVE_PED_FROM_GROUP(iParam0);
    }
  }
}