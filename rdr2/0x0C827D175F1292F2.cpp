// satchel_ui_event_handler.ysc @ L500
void func_11()
{
  int iVar0;
  var uVar1;
  bool bVar2;

  Global_1935689.f_10194 = 0;
  if (Global_1935689.f_10188 != -1)
  {
    iVar0 = Global_1935689.f_10188;
    func_83(&(Global_1935689.f_10181[func_82(Global_1935689.f_10189) /*2*/]), iVar0);
    DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1935689.f_10200, Global_1935689.f_10194);
  }
  uVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
  bVar2 = Global_1935689.f_10194 <= false;
  DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar1, "FolderEmpty", bVar2);
}