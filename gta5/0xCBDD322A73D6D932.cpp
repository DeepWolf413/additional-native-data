// appemail.ysc @ L4572
void func_68()
{
  float fVar0;
  
  fVar0 = func_69(Local_50, Local_47, -90f, 0f, 90f, Global_19758, 350f, 0);
  if (Global_8472 == 0)
  {
    MOBILE::SET_MOBILE_PHONE_SCALE((500f + (75f * (1f - fVar0))));
  }
  if (fVar0 >= 1f)
  {
    Global_22158 = 0;
    func_1(0);
    func_4();
    iLocal_18 = 0;
  }
}