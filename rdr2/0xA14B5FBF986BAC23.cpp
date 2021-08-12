// saloon_dining.ysc @ L4142
void func_37(var uParam0)
{
  if (!func_40(func_125(uParam0)))
  {
    TASK::OPEN_SEQUENCE_TASK(&(uParam0->f_211));
    TASK::TASK_DUCK(0, 0);
    TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
    TASK::TASK_GO_STRAIGHT_TO_COORD(0, func_125(uParam0), 1f, 20000, func_183(uParam0), 1056964608 /* Float: 0.5f */, 0);
    TASK::TASK_PLAY_ANIM(0, "SCRIPT_AMB@TOWN@SALOON@SHOTGUN_DEFEND@CROUCH@RIGHT@MALE_A@TRANS", "UNARMED_TRANS_ARMED", 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
    TASK::CLOSE_SEQUENCE_TASK(uParam0->f_211);
  }
}