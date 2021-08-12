// fussar1.ysc @ L53392
void func_1307()
{
  int iVar0;
  var uVar1;

  func_1805(0, 1065353216 /* Float: 1f */);
  iVar0 = 0;
  while (iVar0 < 18)
  {
    HUD::_UIPROMPT_DISABLE_PROMPT_TYPE_THIS_FRAME(iVar0);
    iVar0++;
  }
  if (PLAYER::_0x45AB66D02B601FA7(PLAYER::PLAYER_ID()))
  {
    PLAYER::_0x64FF4BF9AF59E139(PLAYER::PLAYER_ID(), 1);
  }
  func_1806();
  if (func_844(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
  {
    if (!func_820(Global_35, 716706914))
    {
      WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
      TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
    }
    return;
  }
  if (func_1392(&uVar1) && !func_820(Global_35, 716706914))
  {
    func_1807();
  }
}