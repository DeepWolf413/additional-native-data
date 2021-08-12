// generic_item_writing_on_back.ysc @ L156
void func_5(var uParam0)
{
  if (uParam0->f_131 > 0)
  {
    if (!PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
    {
      PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
    }
    if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE") && PAD::IS_CONTROL_JUST_RELEASED(0, joaat("INPUT_CONTEXT_X")))
    {
      if (UIAPPS::_LAUNCH_APP_BY_HASH_WITH_ENTRY(joaat("TRANSLATION_OVERLAY"), joaat("GENERIC")) == 0)
      {
        uParam0->f_5.f_1 = 1;
        func_9(uParam0);
      }
    }
  }
  else if (PED::_GET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
  {
    PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
  }
  if (UIAPPS::_IS_APP_RUNNING_BY_HASH(joaat("TRANSLATION_OVERLAY")))
  {
    HUD::_0xC9CAEAEEC1256E54(382897689);
  }
  else if (uParam0->f_5.f_1)
  {
    func_7(uParam0);
  }
}