// shop_bait.ysc @ L14622
bool func_462(var uParam0)
{
  GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
  if (DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_273))
  {
    DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_273);
  }
  uParam0->f_273 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "DynamicCatalogItems");
  if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_277))
  {
    uParam0->f_277 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_273, "DynamicCatalogItemsArray");
  }
  if (!func_817(uParam0))
  {
    return false;
  }
  return true;
}