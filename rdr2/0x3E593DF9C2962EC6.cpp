// loanshark_womancry.ysc @ L18513
bool func_640()
{
  if (MAP::DOES_BLIP_EXIST(iLocal_977))
  {
    func_1188(&(Local_1365[0 /*61*/]), &Local_1427, 0, iLocal_977, 0, 5.5f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0);
    func_914(&(Local_1427[0 /*17*/]), func_1189(27), " ", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
    func_641(&(Local_1427[0 /*17*/]), 0, 0);
    return true;
  }
  else
  {
    iLocal_977 = MAP::_0x3E593DF9C2962EC6(-936216634);
    MAP::SET_BLIP_SPRITE(iLocal_977, joaat("BLIP_AMBIENT_LOAN_SHARK"), true);
    if (!func_354(1))
    {
      MAP::_BLIP_SET_MODIFIER(iLocal_977, -401963276);
    }
  }
  return false;
}