// act_cinema.ysc @ L2142
void func_48()
{
  var uVar0;
  
  if (PAD::_0x6CD79468A1E595C6(2))
  {
    iLocal_210 = 0;
  }
  if (!iLocal_210)
  {
    if (func_59(0, -1, 0))
    {
      func_58(0, 0);
      func_57(202, "TXM_EXIT", -1);
      func_56(21, "INPUTGROUP_LOOK", -1);
      func_57(39, "HUD_INPUT91", -1);
      iLocal_210 = 1;
    }
  }
  else
  {
    func_49(uVar0, -1, 0, 1, 0, 0, 1, 1, 0);
  }
}