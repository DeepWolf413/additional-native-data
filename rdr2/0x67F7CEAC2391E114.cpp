// ambush_rnc_type1.ysc @ L4250
void func_152(bool bParam0)
{
  if (func_61(Local_15.f_56, 0, 1))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_15.f_56, true);
    AITRANSPORT::_0x67F7CEAC2391E114(Local_15.f_56, 1);
    TASK::TASK_STAND_STILL(Local_15.f_56, -1);
  }
  if (bParam0)
  {
    func_40(&(Local_274.f_11[1 /*3*/]), 1);
  }
}