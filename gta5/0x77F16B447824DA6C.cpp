// fmmc_launcher.ysc @ L504845
void func_7863(var uParam0, var uParam1)
{
  func_4842(1, 1);
  func_5135(1);
  func_7864();
  if (HUD::IS_PAUSE_MENU_ACTIVE())
  {
    func_7777(0);
    if (func_147(8))
    {
      func_4829(8);
    }
    else if (HUD::GET_CURRENT_FRONTEND_MENU_VERSION() != -545108805)
    {
      HUD::_0x77F16B447824DA6C(127);
    }
  }
  else
  {
    HUD::ACTIVATE_FRONTEND_MENU(-545108805, false, -1);
  }
  if (!func_147(74))
  {
    func_4846(&(Global_2453009.f_780), uParam1->f_14, 1, 1, 1);
    func_7581(uParam0, uParam0->f_964, func_7886(uParam1), uParam1->f_14, uParam1->f_79, 0);
    if (uParam0->f_959 == 9)
    {
      func_4908(69);
    }
  }
  func_7848(uParam0, *uParam1);
  func_7580(uParam0);
}