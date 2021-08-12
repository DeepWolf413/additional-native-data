// map_app_event_handler.ysc @ L88
void func_1(var uParam0)
{
  struct<30> Var0;

  Var0.f_13 = -1;
  Var0.f_24 = -1;
  Var0.f_25 = -1;
  Var0.f_26 = -1;
  Var0.f_27 = -1;
  Var0.f_28 = 1;
  *uParam0 = { Var0 };
  uParam0->f_14 = -1;
  uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
  uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
  uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", 0);
  uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
  HUD::_TEXT_DATABASE_REQUEST("FMMC");
  if (TXD::_DOES_STREAMED_TXD_EXIST(-1859668514))
  {
    TXD::_REQUEST_STREAMED_TXD(-1859668514, false);
  }
  uParam0->f_28 = 1;
}