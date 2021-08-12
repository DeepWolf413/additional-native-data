// camp_beaverhollow.ysc @ L37616
void func_1223(var uParam0, var uParam1)
{
  *uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0, "itemLabel", 0);
  uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "itemDescription", "");
  uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0, "purchaseLabel", "");
  uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0, "purchasePrice", 0);
  uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0, "isGoldPrice", 0);
  INVENTORY::_0x9D21B185ABC2DBC4(uParam0, "effects", 0, 0);
}