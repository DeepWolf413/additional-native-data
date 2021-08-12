// act_bankrobbery01.ysc @ L27299
void func_745(int iParam0, int iParam1, bool bParam2)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  else if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return;
  }
  if (bParam2)
  {
    if (!AITRANSPORT::_0xF382C92CCC1CCDBC(iParam0, iParam1, 1))
    {
      AITRANSPORT::_0xBA8818212633500A(iParam0, iParam1, 1);
    }
  }
  else if (AITRANSPORT::_0xF382C92CCC1CCDBC(iParam0, iParam1, 1))
  {
    AITRANSPORT::_0xBA8818212633500A(iParam0, iParam1, 0);
  }
}