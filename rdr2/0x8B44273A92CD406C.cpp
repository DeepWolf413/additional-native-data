// camp_pronghornranch.ysc @ L7925
void func_268()
{
  if (func_230(joaat("CSTAG_FLOW_LAR1_POST"), 1))
  {
    if (!bLocal_3720)
    {
      func_660(719, "pronghornRanch/Phr_Ranch_Hand1_PostLaramie1");
      func_660(720, "pronghornRanch/Phr_Ranch_Hand2_PostLaramie1");
      func_660(721, "pronghornRanch/Phr_Ranch_Hand3_PostLaramie1");
      func_660(722, "pronghornRanch/Phr_Ranch_Hand4_PostLaramie1");
      func_660(723, "pronghornRanch/Phr_Ranch_Hand5_PostLaramie1");
      func_660(714, "pronghornRanch/Phr_Abe_PostLaramie1");
      bLocal_3720 = true;
      bLocal_3721 = true;
    }
  }
  else if (!bLocal_3721)
  {
    PERSCHAR::_0x8B44273A92CD406C(func_418(719));
    PERSCHAR::_0x8B44273A92CD406C(func_418(720));
    PERSCHAR::_0x8B44273A92CD406C(func_418(721));
    PERSCHAR::_0x8B44273A92CD406C(func_418(722));
    PERSCHAR::_0x8B44273A92CD406C(func_418(723));
    PERSCHAR::_0x8B44273A92CD406C(func_418(714));
    bLocal_3721 = true;
  }
}