// gang3.ysc @ L53427
void func_1321()
{
  if (!func_163(Global_35, 0))
  {
    return;
  }
  if (!func_163(Local_405[0 /*8*/], 0))
  {
    return;
  }
  if (iLocal_1039 == 1 && PAD::IS_DISABLED_CONTROL_PRESSED(0, joaat("INPUT_SPRINT")))
  {
    PED::_0x99A6E246C315BF60(Global_35, 1.15f);
  }
  switch (iLocal_1039)
  {
    case 0:
      _NAMESPACE29::_0x0EABF182FBB63D72(Global_35, 0, 1);
      func_899(0, 0);
      func_1922(1);
      break;
    case 1:
      break;
  }
  if (iLocal_1039 >= 1)
  {
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_BREAKOUT"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
  }
}