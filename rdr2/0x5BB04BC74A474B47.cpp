// winter1.ysc @ L63187
void func_1590(int iParam0, bool bParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    if (bParam1)
    {
      PED::_0x5BB04BC74A474B47(iParam0, joaat("WANDER"));
    }
    else
    {
      PED::_0x9078FB0557364099(iParam0);
    }
  }
}