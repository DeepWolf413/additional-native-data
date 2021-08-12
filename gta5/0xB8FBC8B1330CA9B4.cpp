// am_mp_submarine.ysc @ L344894
void func_5564(var uParam0)
{
  int iVar0;
  
  iVar0 = func_5559(uParam0);
  HUD::SET_RADAR_AS_EXTERIOR_THIS_FRAME();
  CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(false);
  if (!func_5580(uParam0, 1) && func_4869(iVar0))
  {
    func_5576(uParam0, iVar0);
    func_5574(uParam0);
    func_5567(uParam0, iVar0);
    func_5566(uParam0, iVar0);
    return;
  }
  if (func_4869(iVar0) && func_5551(iVar0))
  {
    VEHICLE::_SET_VEHICLE_JET_ENGINE_ON(iVar0, true);
  }
  func_3790();
  func_5565(uParam0);
  func_5546(1);
  CAM::DO_SCREEN_FADE_OUT(500);
  func_5545(0, 32772, 0);
  func_5543(uParam0, 3);
}