// shop_bait.ysc @ L27015
bool func_817(var uParam0)
{
  uParam0->f_1177 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_273, "CatalogItemInspection");
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "isVisible", false);
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1177, "itemLabel", 0);
  DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "itemDescription", "");
  DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "purchaseLabel", "");
  DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "purchasePrice", 0);
  DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "tokenPrice", 0);
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "isGoldPrice", false);
  DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "purchaseModifiedPrice", 0);
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "modifiedPriceVisible", false);
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "modifiedPriceGold", false);
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "ammoVisible", false);
  DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "ammoCurrent", 0);
  DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_1177, "ammoMax", 0);
  DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "ammoTextureDictionary", "");
  DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_1177, "ammoTexture", "");
  uParam0->f_1177.f_1 = INVENTORY::_0x9D21B185ABC2DBC4(uParam0->f_1177, "effects", 0, 0);
  uParam0->f_1177.f_2 = INVENTORY::_0x9D21B185ABC2DBC5(uParam0->f_1177, "stats", 0, func_1224());
  uParam0->f_1177.f_3 = INVENTORY::_0x9D21B185ABC2DBC5(uParam0->f_1177, "compareStats", 0, func_1224());
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_1177, "CompareLabel", 0);
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "NextItem", false);
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_1177, "PreviousItem", false);
  return true;
}