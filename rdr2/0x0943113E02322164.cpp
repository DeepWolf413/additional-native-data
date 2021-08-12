// bathing.ysc @ L8050
int func_246(int iParam0, int iParam1)
{
  int iVar0;

  if (func_136() == 0)
  {
    return 0;
  }
  func_244(iParam0, 0, 0);
  if (func_245(iParam0))
  {
    iVar0 = ENTITY::_0xF7424890E4A094C0(iParam0, 0);
    if (iVar0 != 0)
    {
      return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
    }
  }
  return 0;
}