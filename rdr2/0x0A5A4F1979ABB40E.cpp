// abigail2_1.ysc @ L23891
void func_382(var uParam0)
{
  vector3 vVar0;

  if (!func_776(uParam0, 4))
  {
    if (func_777(uParam0->f_860, 16384))
    {
      GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
    }
    vVar0 = { func_778(uParam0) };
    if (!func_777(uParam0->f_860, 524288))
    {
      func_779(&(uParam0->f_872));
    }
    func_780(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
    func_781(uParam0, 0f, 0f, 0f);
    func_782(uParam0);
    func_783(uParam0);
    func_784(uParam0, 0f, 0f, 0f, 0, 0);
    func_785(uParam0);
    func_744(uParam0, 4);
    func_786(uParam0, 0);
    func_787(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
    if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
    {
      CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
    }
  }
}