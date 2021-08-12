// abigail2_1.ysc @ L74103
bool func_2125(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
  {
    return false;
  }
  iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request_name");
  if (!func_2123(iParam0, iVar0))
  {
    return true;
  }
  if (iVar0 != iParam1)
  {
    return false;
  }
  iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
  return PED::_0x610438375E5D1801(iVar1);
}