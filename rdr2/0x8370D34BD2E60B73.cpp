// bathing.ysc @ L2757
void func_58(int iParam0)
{
  if (CAM::_0x927B810E43E99932(&Local_269))
  {
    func_26();
    CAM::_0x8370D34BD2E60B73();
  }
  else if (func_115(Global_35, 76834332))
  {
    Local_269.f_16 = Global_35;
    func_26();
    PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(Global_35, 1);
    if (iParam0->f_15 == 1)
    {
      PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(iParam0->f_144, 1);
    }
    CAM::_0xB8B207C34285E978(&Local_269);
    CAM::_0xAC77757C05DE9E5A(&Local_269);
  }
}