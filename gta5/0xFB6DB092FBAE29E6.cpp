// fm_content_drug_vehicle.ysc @ L27007
void func_679(int iParam0)
{
  var uVar0;
  var uVar1;
  
  if (func_246())
  {
    func_680(-1027218631, iParam0, &uVar0, 0, 1, 0);
  }
  else
  {
    MONEY::NETWORK_EARN_FROM_AMBIENT_JOB(iParam0, "FM Event Completion", &uVar1);
  }
}