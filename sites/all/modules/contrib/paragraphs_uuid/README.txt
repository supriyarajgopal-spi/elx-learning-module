Paragraph UUID module extends the UUID module to manage the remote environment deployment. This will allow you to deploy paragraph_item to remote content viadeployment module

Problem Description:
When deploy content via deployment module, paragraphs_item can not be deployed due to missing entity dependency, uuid and entity service adapter. This module is created to overcome the gap in between.

User Guide:
1. enable paragraphs_uuid module
2. enable paragraphs_deployment module
3.configure the service endpoint to emable CURD activity for paragraphs_item entity

Dependency:

paragraphs
uuid
services
Entity Dependency API