// abigail21_outro.ysc @ L1867
void func_98(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
  {
    return;
  }
  iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
  if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
  {
    PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
  }
  DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
  DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}