// hunting1.ysc @ L42590
void func_391()
{
  OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_751, fLocal_701);
  OBJECT::SET_FORCE_OBJECT_THIS_FRAME(Local_754, fLocal_701);
  VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
  func_390();
  if (!bLocal_630)
  {
    func_8(&iLocal_610);
    iLocal_609 = func_392(Local_745, 5, 1);
    func_319("HT_NXTLOC");
    iLocal_318 = 9;
  }
  if (func_361())
  {
    func_318(5);
  }
}