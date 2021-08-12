// es_clean_stalls.ysc @ L4332
void func_201()
{
  PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
}